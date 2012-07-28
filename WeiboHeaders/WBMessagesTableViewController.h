/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "ActionSheetHintDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WBContactMessageViewControllerDelegate-Protocol.h"
#import "WBFileManagerDelegate-Protocol.h"
#import "WBMessageCellDelegate-Protocol.h"
#import "WBMessagesEngineDelegate-Protocol.h"

@class ActionSheetHint, IPPromptView, NSArray, NSMutableDictionary, NSString, UIImageView, UIView, WBAudioRecorderOverlayController, WBEmoticonScrollView, WBImageEditorCache, WBMessage, WBMessagesEngine, WBMessagesInputView, WBMessagesToolbarView;

@interface WBMessagesTableViewController : WBTableViewController <UIActionSheetDelegate, WBMessagesEngineDelegate, WBFileManagerDelegate, WBMessageCellDelegate, ActionSheetHintDelegate, WBContactMessageViewControllerDelegate>
{
    NSString *userID;
    NSString *userScreenName;
    NSString *avatarImageURL;
    WBMessagesEngine *networkEngine;
    NSArray *groups;
    WBMessage *selectedMessage;
    ActionSheetHint *currentActionSheetHint;
    UIView *headerView;
    UIView *inputContainerView;
    WBMessagesInputView *inputView;
    WBMessagesToolbarView *toolbarView;
    UIImageView *shadowImageView;
    unsigned int inputViewState;
    NSMutableDictionary *stateInfoDict;
    WBEmoticonScrollView *emoticonScrollView;
    UIImageView *emoticonBackgroundImageView;
    WBAudioRecorderOverlayController *audioRecorderOverlayController;
    BOOL firstTimeViewWillAppear;
    BOOL isViewVisible;
    IPPromptView *imageLoadingView;
    WBImageEditorCache *imageEditorCache;
}

@property(readonly, nonatomic) unsigned int inputViewState; // @synthesize inputViewState;
@property(retain, nonatomic) WBMessage *selectedMessage; // @synthesize selectedMessage;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups;
@property(retain, nonatomic) NSString *avatarImageURL; // @synthesize avatarImageURL;
@property(retain, nonatomic) NSString *userScreenName; // @synthesize userScreenName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void)ActionSheetHintCancel;
- (void)messageDidRemove:(id)arg1 success:(BOOL)arg2;
- (void)messageDidAdd:(id)arg1;
- (void)messageLoadingDidFail:(id)arg1 error:(id)arg2 action:(int)arg3;
- (void)messageLoadingDidSucceed:(id)arg1 action:(int)arg2;
- (void)loadMoreMessagesButtonPressed:(id)arg1;
- (void)avatarButtonPressed:(id)arg1 message:(id)arg2;
- (void)audioButtonPressed:(id)arg1 message:(id)arg2;
- (void)mapButtonPressed:(id)arg1 message:(id)arg2;
- (void)photoButtonPressed:(id)arg1 message:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTableViewData;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

@end
