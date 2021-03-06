/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "TimeLineTab-Protocol.h"

@class BadgeView, MGTwitterEngine_WeiboV4, MyUserFullInfoViewController, MyUserInfoFavViewController, MyUserInfoStatusesViewController, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITextView, UIView, UserFollowerViewController, UserFriendsViewController;

@interface MyUserInfoViewController : UIViewController <TimeLineTab>
{
    NSMutableDictionary *userInfoDic;
    MGTwitterEngine_WeiboV4 *_engineWeiboV4;
    UITextView *m_userDescription;
    UIImageView *m_userImage;
    UIImageView *verifiedImage;
    UIImageView *userInfo_bg;
    UIImageView *tableBackImage;
    UIImageView *lineImageView;
    UIImageView *genderImageView;
    UIImageView *statuseImageView;
    UIImageView *friendImageView;
    UIImageView *followerImageView;
    UIImageView *favouriteImageView;
    UIImageView *profileImageView;
    UIImageView *statuseSelected_bg;
    UILabel *m_userName;
    UILabel *tableViewHeader;
    UILabel *m_userLocation;
    UILabel *m_userUrl;
    UILabel *userNameHeader;
    UILabel *friends_Count;
    UILabel *followers_Count;
    UILabel *statuses_Count;
    UILabel *favourites_Count;
    UILabel *profile_Count;
    UILabel *statuseLabel;
    UILabel *friendLabel;
    UILabel *followerLabel;
    UILabel *favouriteLabel;
    UILabel *current_Count;
    UILabel *currentLabel;
    UILabel *profileLabel;
    UIButton *userUrlButton;
    UIButton *editInfoButton;
    BadgeView *followerBadgeView;
    int button_y;
    int totalHeight;
    int currentView;
    int newFollowers;
    _Bool refreshStatus;
    UILabel *editLabel;
    UIView *tableViewContainer;
    UIView *buttonView;
    UIView *theUserInfoView;
    UserFriendsViewController *m_friendInfoViewController;
    MyUserInfoFavViewController *m_favViewController;
    MyUserInfoStatusesViewController *m_userStatusesViewController;
    UserFollowerViewController *m_followerInfoViewController;
    MyUserFullInfoViewController *m_userFullViewController;
    NSString *vipInfoString;
}

@property(retain, nonatomic) NSString *vipInfoString; // @synthesize vipInfoString;
@property(nonatomic) int newFollowers; // @synthesize newFollowers;
@property(nonatomic) _Bool refreshStatus; // @synthesize refreshStatus;
@property(retain, nonatomic) NSMutableDictionary *userInfoDic; // @synthesize userInfoDic;
- (void)setTabTextColor:(int)arg1;
- (void)refreshSkin;
- (void)skinChanged:(id)arg1;
- (void)languageChanged:(id)arg1;
- (void)profileButtonTouchedOn;
- (void)favStatuseButtonTouchedOn;
- (void)statuseButtonTouchedOn;
- (void)followersButtonTouchedOn;
- (void)friendButtonTouchedOn;
- (void)editUserInfoButtonTouchedOn;
- (void)turnOffAllShowStatus;
- (void)turnOffAllScrollsToTop;
- (void)userUrlButtonTouchedOn;
- (void)onBringToFront;
- (void)onRotated;
- (void)refresh;
- (void)onLogout;
- (void)ChangeUser;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)weiboUserInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)userInfoReceived:(id)arg1 forRequest:(id)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setNewFollowersCount;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)onRotated:(int)arg1;
- (void)getUserVipInfo:(id)arg1;
- (void)upDateUserInfo;
- (void)upDateUserInfoView;
- (void)addUserInfoTableViewContainer;
- (void)addUserInfoView;
- (void)viewDidLoad;

@end

