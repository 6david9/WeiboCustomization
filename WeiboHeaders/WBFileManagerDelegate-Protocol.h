/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WBFileManagerDelegate <NSObject>

@optional
- (void)fileManager:(id)arg1 didUpdateDownloadProgressForKey:(id)arg2 receivedBytes:(float)arg3 totalBytes:(float)arg4 progress:(float)arg5;
- (void)fileManager:(id)arg1 didFailWithKey:(id)arg2 error:(id)arg3;
- (void)fileManager:(id)arg1 didFinishWithFile:(id)arg2 forKey:(id)arg3;
@end
