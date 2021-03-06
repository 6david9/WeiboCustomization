/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface TTUserInfo : NSObject
{
    NSString *_topic;
    id _strong;
    id _weak;
}

+ (id)weak:(id)arg1;
+ (id)topic:(id)arg1;
+ (id)topic:(id)arg1 strong:(id)arg2 weak:(id)arg3;
@property(nonatomic) id weak; // @synthesize weak=_weak;
@property(retain, nonatomic) id strong; // @synthesize strong=_strong;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)dealloc;
- (id)initWithTopic:(id)arg1 strong:(id)arg2 weak:(id)arg3;

@end

