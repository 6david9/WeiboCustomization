/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBWorker.h"

@class NSMutableArray;

@interface WBRestrictedWorker : WBWorker
{
    BOOL _ignoreRestrict;
    NSMutableArray *_lastTaskExecuteTimes;
}

- (void)work;
- (void)recordLastTime;
- (id)nextTimeWithRestriction;
- (void)dealloc;
- (id)initWithTaskQueue:(id)arg1;

@end

