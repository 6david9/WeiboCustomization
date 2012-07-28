/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "ActionSheetHintDelegate-Protocol.h"
#import "CKImagePickerControllerDelegate-Protocol.h"
#import "HotwordDelegate-Protocol.h"
#import "IFlyRecognizeControlDelegate-Protocol.h"
#import "IPImageEditorViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WBContactAtPersonViewControllerDelegate-Protocol.h"
#import "WBEmoticonScrollViewDelegate-Protocol.h"
#import "WBPOIListViewControllerDelegate-Protocol.h"
#import "WBPhotoViewControllerDelegate-Protocol.h"

@class ActionSheetHint, IFlyRecognizeControl, IPPromptView, NSDictionary, NSMutableString, NSString, NSTimer, NSURL, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIColor, UIImage, UIImagePickerController, UIImageView, UILabel, UITextView, WBEmoticonScrollView, WBImageEditorCache, WBMblogTask, WBPOIListViewController, WBSpot, WBSpotEngine, twitEditorBarView;

@interface TwitEditorController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, ActionSheetHintDelegate, UIScrollViewDelegate, HotwordDelegate, WBPhotoViewControllerDelegate, WBEmoticonScrollViewDelegate, CKImagePickerControllerDelegate, WBContactAtPersonViewControllerDelegate, WBPOIListViewControllerDelegate, IPImageEditorViewControllerDelegate, IFlyRecognizeControlDelegate>
{
    id <TwitEditorControllerDelegate> delegate;
    UIBarButtonItem *cancelButton;
    UIBarButtonItem *sendButton;
    UIImageView *previewImageView;
    UITextView *messageText;
    UIImagePickerController *imgPicker;
    UILabel *charsCount;
    UILabel *TitleLable;
    UIButton *locationButton;
    UIButton *takePicButton;
    UIButton *saveButton;
    struct _NSRange rangeSel;
    BOOL inTextEditingMode;
    BOOL isBlog;
    ActionSheetHint *progressSheet;
    UIBarButtonItem *segmentBarItem;
    UIColor *defaultTintColor;
    NSString *currentMediaYFrogURL;
    NSString *photoURLPlaceholderMask;
    NSString *videoURLPlaceholderMask;
    BOOL messageTextWillIgnoreNextViewAppearing;
    NSDictionary *_message;
    UIActivityIndicatorView *_indicator;
    int _indicatorCount;
    BOOL twitWasChangedManually;
    NSURL *pickedVideo;
    UIImage *pickedPhoto;
    WBImageEditorCache *imageEditorCache;
    IPPromptView *imageLoadingView;
    NSString *viewTag;
    NSString *compareString;
    BOOL navItemFlag;
    BOOL skipFlag;
    NSMutableString *cacheTextBoxMsg;
    NSString *msg_at_nick;
    int scaleImgWidth;
    unsigned int imgSourceType;
    twitEditorBarView *twitterBarView;
    BOOL isOrientation;
    BOOL isHavImage;
    UIButton *imageButton;
    UIImageView *imageClear;
    UIButton *charButton;
    UIActivityIndicatorView *activityView;
    BOOL isHavLocation;
    UIImageView *imgLocation;
    NSString *textVoice;
    BOOL isLocation;
    UIButton *POIBtn;
    NSString *poiName;
    NSString *poiIDstr;
    NSString *areaName;
    NSString *xid;
    NSString *savePOIName;
    NSTimer *loaderQueueTimer;
    int firstTime;
    WBEmoticonScrollView *emoticonScrollView;
    UIImageView *emoticonBackgroundImageView;
    BOOL isShowingEmoticon;
    NSString *currentImageName;
    BOOL isCheckIn;
    WBPOIListViewController *poiListViewController;
    WBSpot *currentAreaInfo;
    WBSpotEngine *spotEngine;
    BOOL userInterfaceSetuped;
    float currentLatitude;
    float currentLongitude;
    BOOL locationHasOffset;
    float picLatitude;
    float picLongitude;
    BOOL shouldLocateAutomatically;
    BOOL ignoresPreviousLocationSetting;
    BOOL needsDimissModalViewControllerFromTabbar;
    BOOL usesForSharingThisApp;
    IFlyRecognizeControl *_iFlyRecognizeControl;
    BOOL isRecording;
    WBMblogTask *task;
}

@property(retain, nonatomic) WBMblogTask *task; // @synthesize task;
@property(nonatomic) BOOL ignoresPreviousLocationSetting; // @synthesize ignoresPreviousLocationSetting;
@property(readonly, nonatomic) BOOL shouldLocateAutomatically; // @synthesize shouldLocateAutomatically;
@property(retain, nonatomic) WBSpotEngine *spotEngine; // @synthesize spotEngine;
@property(retain, nonatomic) WBSpot *currentAreaInfo; // @synthesize currentAreaInfo;
@property(nonatomic) BOOL isCheckIn; // @synthesize isCheckIn;
@property(retain, nonatomic) NSString *currentImageName; // @synthesize currentImageName;
@property(retain, nonatomic) NSTimer *loaderQueueTimer; // @synthesize loaderQueueTimer;
@property(copy, nonatomic) NSString *savePOIName; // @synthesize savePOIName;
@property(copy, nonatomic) NSString *xid; // @synthesize xid;
@property(copy, nonatomic) NSString *poiIDstr; // @synthesize poiIDstr;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName;
@property(nonatomic) BOOL isBlog; // @synthesize isBlog;
@property(retain, nonatomic) NSString *msg_at_nick; // @synthesize msg_at_nick;
@property(retain, nonatomic) NSString *viewTag; // @synthesize viewTag;
@property(retain, nonatomic) UIImage *pickedPhoto; // @synthesize pickedPhoto;
@property(retain, nonatomic) NSURL *pickedVideo; // @synthesize pickedVideo;
@property(retain, nonatomic) NSDictionary *_message; // @synthesize _message;
@property(retain, nonatomic) NSString *currentMediaYFrogURL; // @synthesize currentMediaYFrogURL;
@property(retain, nonatomic) ActionSheetHint *progressSheet; // @synthesize progressSheet;
@property(nonatomic) id <TwitEditorControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL needsDimissModalViewControllerFromTabbar; // @synthesize needsDimissModalViewControllerFromTabbar;
@property(nonatomic) BOOL usesForSharingThisApp; // @synthesize usesForSharingThisApp;
- (void)onResult:(id)arg1 theResult:(id)arg2;
- (void)onRecognizeResult:(id)arg1;
- (void)onUpdateTextView:(id)arg1;
- (void)onRecognizeEnd:(id)arg1 theError:(int)arg2;
- (void)getVoiceBegin:(id)arg1;
- (id)initWithTask:(id)arg1;
- (void)readFromTask;
- (void)saveTask;
- (void)enableAutoLocate;
- (void)disableAutoLocate;
- (void)checkAutoLocate;
- (void)locationManagerDidFailToLocateNotification:(id)arg1;
- (void)locationManagerDidFinishLocatingNotification:(id)arg1;
- (void)poiListViewController:(id)arg1 didSelectSpot:(id)arg2;
- (void)atPersonViewController:(id)arg1 didSelectAtPersonWithName:(id)arg2;
- (void)replacePOIInfo:(id)arg1;
- (void)insertPOIInfo;
- (void)insertPOIInfo:(BOOL)arg1;
- (void)displayHotwordCancelled;
- (struct _NSRange)getRangeSel:(struct _NSRange)arg1;
- (void)getXID:(id)arg1;
- (void)getPOIID:(id)arg1;
- (void)getPOIName:(id)arg1;
- (void)GetPOIList;
- (void)displayTopic:(id)arg1;
- (void)displayHotword:(id)arg1;
- (BOOL)mediaIsPicked;
- (void)releaseActivityIndicator;
- (void)retainActivityIndicator;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)cancel;
- (void)doCancel;
- (void)closeAfterHaveResult;
- (void)postMessageSegmentedActions:(id)arg1;
- (void)saveMessageAction:(id)arg1;
- (void)hideProgressSheet;
- (void)imagesSegmentedActions:(id)arg1;
- (void)popController;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setReplyToMessage:(id)arg1;
- (void)setRetwit:(id)arg1 whose:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)photoViewControllerDidDeleteImage:(id)arg1;
- (BOOL)isLocationAvailable;
- (void)insertLocationAction;
- (void)postImageLaterAction;
- (void)ActionSheetHintCancel;
- (void)postImageAction;
- (void)releaseExitKey;
- (void)setExitKey;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)attachTopicActions:(id)arg1;
- (void)attachImagesActions:(id)arg1;
- (void)attachAtSomeBody;
- (void)grabImage;
- (id)availableMediaTypes:(unsigned int)arg1;
- (void)finishEditAction;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setupEmoticonKeyboard;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)emoticonDidSelect:(id)arg1;
- (void)HiddenFace;
- (void)DisplayFace;
- (void)setButtonNormal:(id)arg1 Highlight:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)closeHintAfterDelay;
- (void)dismissViewController;
- (void)setupSharingThisAppUserInterface;
- (void)setupPOIUserInterface;
- (void)setupUserInterface;
- (void)viewDidLoad;
- (void)changePOIButtonFrame;
- (void)setViewsLocationBasedOnInterfaceOrientation:(int)arg1;
- (void)keyboardChangedNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)setViewLoadController;
- (void)appWillTerminate:(id)arg1;
- (void)imageViewTouched:(id)arg1;
- (void)charButtonPressed:(id)arg1;
- (void)imageEditorDidDeleteImage:(id)arg1;
- (void)imageEditorDidCancelReEditing:(id)arg1;
- (void)imageEditorDidCancelEditing:(id)arg1;
- (void)imageEditor:(id)arg1 didFinishEditingImage:(id)arg2 effectName:(id)arg3;
- (void)startLoadingImageAnimation;
- (void)startLoadingImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 metadata:(id)arg3;
- (void)setImageOther:(id)arg1 movie:(id)arg2;
- (void)saveLastBlogImageWithOriginalImageData:(id)arg1;
- (void)setImage:(id)arg1 movie:(id)arg2;
- (void)setImageImage:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)dismissProgressSheetIfExist;
- (id)init;
- (id)initWithAt:(id)arg1;
- (void)initData;
- (void)setURLPlaceholder;
- (id)currentMediaURLPlaceholder;
- (struct _NSRange)urlPlaceHolderRange;
- (void)setTitleLabel:(id)arg1;
- (void)setMessageTextText:(id)arg1;
- (void)sendMessageAction:(id)arg1;
- (void)setNavigatorButtons;
- (void)setCharsCount;

@end
