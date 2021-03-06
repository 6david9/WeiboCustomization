/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBHintBoard.h"

@class WBAdModel, WBContentImageView;

@interface WBStatusPostAdHintBoard : WBHintBoard
{
    WBAdModel *statusPostAdModel;
    WBContentImageView *statusPostAdIconImageView;
}

@property(retain, nonatomic) WBAdModel *statusPostAdModel; // @synthesize statusPostAdModel;
- (void)dealloc;
- (void)settingStatusPostAdModel:(id)arg1;
- (void)resetHintLable:(id)arg1;
- (void)initHintLabel;
- (void)closeButtonPressed:(id)arg1;
- (void)initCloseButton;
- (void)initStatusPostAdIconImageView;
- (id)initWithFrame:(struct CGRect)arg1 dismissDirection:(int)arg2;
- (void)reloadUIElements;

@end

