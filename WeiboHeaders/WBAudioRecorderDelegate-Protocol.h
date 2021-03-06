/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WBAudioRecorderDelegate <NSObject>

@optional
- (void)audioRecorder:(id)arg1 updateMetersWithAveragePower:(float)arg2;
- (void)audioRecorderBeginInterruption:(id)arg1;
- (void)audioRecorderDidCancel:(id)arg1;
- (void)audioRecorder:(id)arg1 didFailWithError:(id)arg2;
- (void)audioRecorder:(id)arg1 didFinishRecordingWithFile:(id)arg2;
- (void)audioRecorderDidStartEncoding:(id)arg1;
- (BOOL)audioRecorderShouldStartEncoding:(id)arg1;
@end

