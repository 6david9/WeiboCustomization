/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBUser.h"

@class NSString, WBAttitude;

@interface WBLikeUser : WBUser
{
    NSString *attitudeID;
    WBAttitude *attitude;
}

@property(retain, nonatomic) WBAttitude *attitude; // @synthesize attitude;
@property(retain, nonatomic) NSString *attitudeID; // @synthesize attitudeID;
- (BOOL)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end
