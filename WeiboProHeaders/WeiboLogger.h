/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MGTwitterEngine_WeiboV4;

@interface WeiboLogger : NSObject
{
    MGTwitterEngine_WeiboV4 *_engine;
}

+ (id)sharedInstance;
- (void)clearLog;
- (id)readLog;
- (void)writeLog:(id)arg1;
- (void)writeLogWithDictionary:(id)arg1;
- (void)writeLogWithKeysAndValues:(id)arg1;
- (void)writeLogWithKey:(id)arg1 andValue:(id)arg2;
- (void)writeLogWithStrings:(id)arg1;
- (void)sendLog;
- (void)dealloc;
- (id)init;

@end

