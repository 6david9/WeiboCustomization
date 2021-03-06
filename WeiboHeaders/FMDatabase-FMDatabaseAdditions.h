/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "FMDatabase.h"

@interface FMDatabase (FMDatabaseAdditions)
- (BOOL)validateSQL:(id)arg1 error:(id *)arg2;
- (BOOL)columnExists:(id)arg1 columnName:(id)arg2;
- (id)getTableSchema:(id)arg1;
- (id)getSchema;
- (BOOL)tableExists:(id)arg1;
- (id)stringDictForQuery:(id)arg1;
- (id)stringDictForQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)dateForQuery:(id)arg1;
- (id)dataForQuery:(id)arg1;
- (double)doubleForQuery:(id)arg1;
- (BOOL)boolForQuery:(id)arg1;
- (long)longForQuery:(id)arg1;
- (int)intForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1;
@end

