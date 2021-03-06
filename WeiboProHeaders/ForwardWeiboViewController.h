/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "DisplayExpressionDelegate-Protocol.h"
#import "InsertTopicDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "UserFinderDelegate-Protocol.h"

@class AtPersonToMesViewController, ExpressionViewContrller, MGTwitterEngine_WeiboV4, NSDictionary, NSString, SSTextView, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIImageView, UILabel, UIPopoverController, UIToolbar, UIView;

@interface ForwardWeiboViewController : UIViewController <UITextViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, UserFinderDelegate, DisplayExpressionDelegate, InsertTopicDelegate>
{
    MGTwitterEngine_WeiboV4 *_engine;
    SSTextView *_textContent;
    UILabel *wordCountLabel;
    NSDictionary *weiboInfo;
    NSString *_textString;
    UIActivityIndicatorView *sendActivity;
    UIBarButtonItem *barItemSend;
    UIBarButtonItem *barItemLoad;
    UIToolbar *toolbar;
    UIButton *sendWeiboBtn;
    UIButton *isCommentBtn;
    BOOL isComment;
    UIPopoverController *atpopoverController;
    UIPopoverController *topicPopoverController;
    struct _NSRange selectedRange;
    ExpressionViewContrller *expressionView;
    UIView *baseView;
    struct _NSRange topicRange;
    struct _NSRange topicEndRange;
    struct _NSRange atRange;
    struct _NSRange atEndRange;
    BOOL isTopicPopOn;
    BOOL sending;
    AtPersonToMesViewController *mAtPersonToMesViewController;
    BOOL showFace;
    UIImageView *comWeiboBg;
    UIView *controlView;
    UIView *clearTextView;
    UIImageView *clearImageView;
    UIButton *clearButton;
    UIButton *faceButton;
    BOOL isKeyboardUp;
}

@property(retain, nonatomic) NSString *_textString; // @synthesize _textString;
@property(retain, nonatomic) NSDictionary *weiboInfo; // @synthesize weiboInfo;
- (void)backspaceTouched;
- (void)onInsertTopic:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)DisplayWord:(id)arg1;
- (void)onUsersFoundNick:(id)arg1 Uid:(id)arg2;
- (void)callTopicList:(id)arg1;
- (void)callAtList:(id)arg1;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2;
- (void)onSaveTouched:(id)arg1;
- (void)onCancelTouched:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)saveTextToFile:(BOOL)arg1;
- (void)readTextFromFile;
- (void)textLengthCount;
- (void)changeSelectedRange:(struct _NSRange)arg1;
- (void)insertFeedBack:(id)arg1;
- (void)isCommentBtnTouched:(id)arg1;
- (void)insertTopic:(id)arg1;
- (void)closeMenu:(id)arg1;
- (void)popMenu:(id)arg1;
- (void)showAtView:(id)arg1;
- (void)showFaceView;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)rotateViewController:(int)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
- (void)initContentAndFooter;
- (void)initToolbar;

@end

