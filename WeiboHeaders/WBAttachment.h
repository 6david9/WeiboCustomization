/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"

@class NSString;

@interface WBAttachment : WBModelObject <WBDatabaseModel>
{
    unsigned long long _internalId;
    unsigned long long _msgId;
    NSString *_talkToUserId;
    unsigned int _order;
    NSString *_fid;
    NSString *_fname;
    unsigned long long _size;
    NSString *_type;
    NSString *_s3Url;
    NSString *_thumbnailUrl;
    int _mode;
    int _audioType;
}

+ (void)removeAllMessagesForUser:(id)arg1;
+ (void)deleteAllAttachmentsForMessage:(unsigned long long)arg1;
+ (id)loadAttachmentForFile:(id)arg1;
+ (id)loadAttachmentsForMessage:(unsigned long long)arg1;
+ (id)attachmentWithTask:(id)arg1;
@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *s3Url; // @synthesize s3Url=_s3Url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *fname; // @synthesize fname=_fname;
@property(retain, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(nonatomic) unsigned int order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *talkToUserId; // @synthesize talkToUserId=_talkToUserId;
@property(nonatomic) unsigned long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long internalId; // @synthesize internalId=_internalId;
- (void)saveToDB:(id)arg1;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (void)deleteFromDB:(id)arg1;
- (void)updateDB:(id)arg1;
- (void)insertIntoDB:(id)arg1;
- (void)dealloc;
- (BOOL)updateWithJSONDictionary:(id)arg1;
- (id)init;
- (void)setModeWithFileName;
- (BOOL)isValid;

@end
