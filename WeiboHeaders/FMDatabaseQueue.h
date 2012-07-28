/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FMDatabase, NSString;

@interface FMDatabaseQueue : NSObject
{
    NSString *_path;
    struct dispatch_queue_s *_queue;
    FMDatabase *_db;
}

+ (id)databaseQueueWithPath:(id)arg1;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)inSavePoint:(id)arg1;
- (void)inTransaction:(id)arg1;
- (void)inDeferredTransaction:(id)arg1;
- (void)beginTransaction:(BOOL)arg1 withBlock:(id)arg2;
- (void)inDatabase:(id)arg1;
- (id)database;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
