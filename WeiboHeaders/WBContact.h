/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSURL;

@interface WBContact : WBModelObject <WBDatabaseModel>
{
    NSString *userID;
    NSString *screenName;
    NSString *profileImageURL;
    NSString *remark;
    NSString *extendedDescription;
    NSString *phoneName;
    NSString *phoneNumber;
    NSArray *phoneNumbers;
    unsigned int relationship;
    unsigned int verifiedType;
    unsigned int permission;
    double lastUsedTime;
    double lastMessageTime;
    NSString *sortName;
    NSString *sortSectionName;
    NSString *searchString;
    NSMutableDictionary *userInfo;
    BOOL extendedDescriptionIncluded;
}

+ (void)deleteAllContactsFromDB:(id)arg1;
+ (id)contactWithOpenAPIDictionary:(id)arg1;
+ (id)contactWithUserID:(id)arg1 screenName:(id)arg2 profileImageURL:(id)arg3;
+ (id)contactWithUserID:(id)arg1;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString;
@property(retain, nonatomic) NSString *sortSectionName; // @synthesize sortSectionName;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName;
@property(nonatomic) double lastMessageTime; // @synthesize lastMessageTime;
@property(nonatomic) double lastUsedTime; // @synthesize lastUsedTime;
@property(nonatomic) unsigned int permission; // @synthesize permission;
@property(nonatomic) unsigned int verifiedType; // @synthesize verifiedType;
@property(nonatomic) unsigned int relationship; // @synthesize relationship;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property(retain, nonatomic) NSString *phoneName; // @synthesize phoneName;
@property(retain, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *profileImageURL; // @synthesize profileImageURL;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void)applyOperation:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (void)saveToDB:(id)arg1;
- (BOOL)mergeFromDB:(id)arg1;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (void)deleteFromDB:(id)arg1;
- (void)updateDB:(id)arg1;
- (void)insertIntoDB:(id)arg1;
- (BOOL)isValidToPersist;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
@property(readonly, nonatomic) BOOL canSendText;
@property(readonly, nonatomic) NSURL *phoneCallURL;
@property(readonly, nonatomic) BOOL canMakeCall;
@property(readonly, nonatomic) BOOL canSendMessage;
@property(readonly, nonatomic) BOOL isBlocked;
@property(readonly, nonatomic) BOOL isFriend;
@property(readonly, nonatomic) BOOL isFollowing;
@property(readonly, nonatomic) BOOL isFollower;
@property(readonly, nonatomic) BOOL isCurrentUser;
- (BOOL)updateWithDictionary:(id)arg1;
- (BOOL)updateWithJSONDictionary:(id)arg1;
- (id)init;

@end

