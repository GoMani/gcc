// Copyright 2011 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

package os

import (
	"syscall"
	"time"
)

func sameFile(fs1, fs2 *fileStat) bool {
	stat1 := fs1.sys.(*syscall.Stat_t)
	stat2 := fs2.sys.(*syscall.Stat_t)
	return stat1.Dev == stat2.Dev && stat1.Ino == stat2.Ino
}

func fileInfoFromStat(st *syscall.Stat_t, name string) FileInfo {
	fs := &fileStat{
		name:    basename(name),
		size:    int64(st.Size),
		modTime: timestrucToTime(st.Mtim),
		sys:     st,
	}
	fs.mode = FileMode(st.Mode & 0777)
	switch st.Mode & syscall.S_IFMT {
	case syscall.S_IFBLK, syscall.S_IFCHR:
		fs.mode |= ModeDevice
	case syscall.S_IFDIR:
		fs.mode |= ModeDir
	case syscall.S_IFIFO:
		fs.mode |= ModeNamedPipe
	case syscall.S_IFLNK:
		fs.mode |= ModeSymlink
	case syscall.S_IFREG:
		// nothing to do
	case syscall.S_IFSOCK:
		fs.mode |= ModeSocket
	}
	if st.Mode&syscall.S_ISGID != 0 {
		fs.mode |= ModeSetgid
	}
	if st.Mode&syscall.S_ISUID != 0 {
		fs.mode |= ModeSetuid
	}
	return fs
}

func timestrucToTime(ts syscall.Timestruc) time.Time {
	return time.Unix(int64(ts.Sec), int64(ts.Nsec))
}

// For testing.
func atime(fi FileInfo) time.Time {
	return timestrucToTime(fi.(*fileStat).Sys().(*syscall.Stat_t).Atim)
}
