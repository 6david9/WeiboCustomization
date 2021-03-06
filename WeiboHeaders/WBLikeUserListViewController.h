/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBStatusBusinessViewController.h"

#import "WBLikeUserListTableViewCellDelegate-Protocol.h"

@class WBLikeEngine;

@interface WBLikeUserListViewController : WBStatusBusinessViewController <WBLikeUserListTableViewCellDelegate>
{
    WBLikeEngine *likeEngine;
}

- (void)cell:(id)arg1 didPressAvatarViewWithUser:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableViewHasData;
- (void)viewWillDisappear:(BOOL)arg1;
- (int)numberOfDataRows;
- (float)heightForRowAtIndexPath:(id)arg1;
- (void)initStatusBusinessEngine;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

