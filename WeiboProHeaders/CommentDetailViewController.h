/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DetailContainerViewController, ImageLoader, MGTwitterEngine, NSMutableArray, NSString, UIActivityIndicatorView, UITableView, WeiboDetailViewController;

@interface CommentDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    UITableView *mainTableView;
    MGTwitterEngine *_engine;
    NSMutableArray *_items;
    unsigned char orientionChanged;
    unsigned char verifiedStatus;
    unsigned char loadOlder;
    unsigned char favStatus;
    unsigned char loadingData;
    UIActivityIndicatorView *moreActivity;
    UIActivityIndicatorView *m_loadingActivity;
    DetailContainerViewController *myDetailView;
    ImageLoader *cellImageLoader;
    NSString *m_commentID;
    unsigned long long commentID;
    unsigned long long ids;
    int m_commentPage;
    WeiboDetailViewController *m_weiboDetailController;
    unsigned char isReplyComment;
}

@property(nonatomic) unsigned char isReplyComment; // @synthesize isReplyComment;
@property(retain, nonatomic) WeiboDetailViewController *m_weiboDetailController; // @synthesize m_weiboDetailController;
@property(retain, nonatomic) NSString *m_commentID; // @synthesize m_commentID;
@property(retain, nonatomic) DetailContainerViewController *myDetailView; // @synthesize myDetailView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)onUserPhotoTouched:(id)arg1;
- (void)onWeiboThumbTouched:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onBringToFront;
- (void)onRotated;
- (void)refresh;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onWeiboRecommentTouched:(id)arg1;
- (id)tableviewCellWithReuseIdentifier:(id)arg1;
- (BOOL)checkFavState:(id)arg1;
- (void)loadMoreWeibo;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end
