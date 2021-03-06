/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "SubTabDelegate-Protocol.h"

@class GuidePopView, HomeViewTableHeaderView, MGTwitterEngine, NSMutableArray, NSString, UIActivityIndicatorView, UIViewController;

@interface FriendsFollowsVC : WBTableViewController <SubTabDelegate>
{
    NSString *uid;
    MGTwitterEngine *_twitter;
    BOOL _loading;
    NSMutableArray *_friends;
    int _pageNo;
    int _count;
    UIActivityIndicatorView *indicatorLoadingMore;
    NSString *searchingKeyword;
    UIViewController *parentVC;
    HomeViewTableHeaderView *refreshHeaderView;
    BOOL _hintRemoved;
    GuidePopView *guideView;
    BOOL isMore;
    id <FriendsFollowsVCDelegate> delegate;
}

@property(nonatomic) id <FriendsFollowsVCDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) HomeViewTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView;
@property(retain, nonatomic) UIViewController *parentVC; // @synthesize parentVC;
@property(retain, nonatomic) NSString *searchingKeyword; // @synthesize searchingKeyword;
@property(retain, nonatomic) NSString *uid; // @synthesize uid;
- (void)basicInfoReceived:(id)arg1 forRequest:(id)arg2 responseType:(int)arg3;
- (void)onUserReLogin:(id)arg1;
- (void)beforeSendRequest;
- (void)finishLoadingNewData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showLoadingHeader;
- (void)createHeaderView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadMoreFriends;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)fansReceived:(id)arg1 forRequest:(id)arg2;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithUid:(id)arg1;
- (void)onBringToFront;
- (void)forceReloadData;

@end

