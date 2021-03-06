/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "TimeLineTab-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WeiBoCoreTextViewDelegate-Protocol.h"

@class MGTwitterEngine_WeiboV4, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NewHomelineViewController, TableRefreshHeaderView, UIActivityIndicatorView, UIImageView, UITableView, UITableViewCell;

@interface MyUserInfoFavViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WeiBoCoreTextViewDelegate, TimeLineTab>
{
    UITableView *mainTableView;
    MGTwitterEngine_WeiboV4 *_engine;
    NSMutableArray *_items;
    int pageNo;
    int headerHeight;
    int loadingTime;
    unsigned char orientionChanged;
    unsigned char verifiedStatus;
    unsigned char loadOlder;
    unsigned char favStatus;
    unsigned char reportStatus;
    unsigned char loadingData;
    unsigned char showStatus;
    UIActivityIndicatorView *moreActivity;
    NewHomelineViewController *myDetailView;
    TableRefreshHeaderView *refreshHeaderView;
    NSMutableDictionary *comNumberDictionary;
    UIImageView *loadMoreBackImage;
    NSString *nowUserId;
    id delegate;
    NSDictionary *selectedWeibo;
    NSString *selectedImage;
    UITableViewCell *selectedCell;
    BOOL loadingOlder;
    BOOL noOlderWeibo;
    NSTimer *loadTimer;
}

@property(nonatomic) int headerHeight; // @synthesize headerHeight;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(nonatomic) unsigned char showStatus; // @synthesize showStatus;
@property(retain, nonatomic) NSString *nowUserId; // @synthesize nowUserId;
@property(retain, nonatomic) TableRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView;
@property(retain, nonatomic) NSString *selectedImage; // @synthesize selectedImage;
@property(retain, nonatomic) NSDictionary *selectedWeibo; // @synthesize selectedWeibo;
@property(nonatomic) NewHomelineViewController *myDetailView; // @synthesize myDetailView;
@property(retain, nonatomic) NSMutableArray *_items; // @synthesize _items;
@property(nonatomic) UITableView *mainTableView; // @synthesize mainTableView;
- (void)weiBoCoreTextViewTouchedAttributedInfo:(id)arg1 index:(int)arg2 tag:(int)arg3;
- (void)thirdViewControllerClosed;
- (void)languageChanged:(id)arg1;
- (void)ChangeUser;
- (void)refreshSkin;
- (void)skinChanged:(id)arg1;
- (void)fontSizeChanged:(id)arg1;
- (void)weiboDeleteDidFinished:(id)arg1;
- (void)changeSelectCellBackColor:(int)arg1 cellDic:(id)arg2 isButton:(BOOL)arg3;
- (void)changeSelectImageViewBackColor:(id)arg1 selectedStatus:(BOOL)arg2;
- (void)onWeiboRTTouched:(id)arg1;
- (void)onWeiboMapTouched:(id)arg1;
- (void)onUserPhotoTouched:(id)arg1;
- (void)onWeiboThumbTouched:(id)arg1;
- (void)finishLoadingNewData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showLoadingHeader;
- (void)createHeaderView;
- (void)onBringToFront;
- (void)onLogout;
- (void)onRotated;
- (void)refresh;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)rtCommentNumbersReceived:(id)arg1 forRequest:(id)arg2;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableviewCellWithReuseIdentifier:(id)arg1;
- (void)updateRtCommentNumberOfWeibos:(id)arg1;
- (void)loadMoreWeibo;
- (void)loadFavStatuses:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)loadTimeOut;
- (void)releaseTimer;
- (void)viewDidLoad;

@end

