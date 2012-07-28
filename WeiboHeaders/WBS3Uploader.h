/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBPartUploader.h"

@class NSString;

@interface WBS3Uploader : WBPartUploader
{
    NSString *_s3host;
}

- (void)handleError;
- (void)upload;
- (void)doUpload;
- (BOOL)doRetryUpload:(id)arg1;
- (void)locationS3Host;
- (void)uploadInit;
- (id)signPartFile:(unsigned int)arg1;
- (BOOL)uploadPartFile:(unsigned int)arg1 fromOffset:(unsigned long long)arg2 withSignInfo:(id)arg3;
- (BOOL)mergeFile;
- (void)_saveUploadingInfo:(id)arg1;
- (void)_loadUploadingInfo:(id)arg1;
- (unsigned long long)getPartFileSize;
- (void)dealloc;

@end
