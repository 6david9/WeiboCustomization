/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class WBMessageView;

@interface WBMessageCell : UITableViewCell
{
    WBMessageView *messageView;
}

+ (int)cellHeightForMessage:(id)arg1;
@property(retain, nonatomic) WBMessageView *messageView; // @synthesize messageView;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

