/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewCell.h"

@class WBAPITaskBase;

@interface WBDraftTableViewCell : WBTableViewCell
{
    WBAPITaskBase *draft;
}

@property(retain, nonatomic) WBAPITaskBase *draft; // @synthesize draft;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
