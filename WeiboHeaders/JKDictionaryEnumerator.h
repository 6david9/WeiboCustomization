/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@interface JKDictionaryEnumerator : NSEnumerator
{
    id collection;
    unsigned int nextObject;
}

- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)initWithJKDictionary:(id)arg1;

@end

