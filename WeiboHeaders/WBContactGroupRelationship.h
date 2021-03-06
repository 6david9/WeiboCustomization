/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@interface WBContactGroupRelationship : WBModelObject <WBDatabaseModel>
{
}

+ (void)saveRelationshipWithGroup:(id)arg1 contact:(id)arg2 database:(id)arg3;
+ (void)saveRelationshipWithGroupID:(id)arg1 contact:(id)arg2 database:(id)arg3;
+ (void)deleteRelationshipsWithContact:(id)arg1 database:(id)arg2;
+ (void)deleteRelationshipsWithUserID:(id)arg1 database:(id)arg2;
+ (void)deleteRelationshipsWithGroup:(id)arg1 database:(id)arg2;
+ (void)deleteAllRelationships:(id)arg1;

@end

