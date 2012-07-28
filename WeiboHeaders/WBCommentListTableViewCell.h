/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewCell.h"

@class UIButton, UIImageView, UILabel, WBContactAvatarView, WBUserScreenNameLabel;

@interface WBCommentListTableViewCell : WBTableViewCell
{
    WBContactAvatarView *avatarView;
    WBUserScreenNameLabel *screenNameLabel;
    UILabel *timeLabel;
    UILabel *contentLabel;
    UIButton *replyButton;
    UIImageView *separatorImageView;
    id <WBCommentListTableViewCellDelegate> delegate;
}

+ (float)rowHeightOfComment:(id)arg1;
+ (id)contentOfComment:(id)arg1;
@property(nonatomic) id <WBCommentListTableViewCellDelegate> delegate; // @synthesize delegate;
- (void)setComment:(id)arg1;
- (void)layoutSubviews;
- (void)avatarViewPressed:(id)arg1;
- (void)replyButtonPressed:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
