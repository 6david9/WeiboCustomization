/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class ImageScrollView, MGTwitterEngine, NSDictionary, NSMutableArray, UIButton, UIImageView, UILabel;

@interface PhotoViewerViewController : UIViewController <UIScrollViewDelegate>
{
    NSDictionary *weiboInfo;
    UIImageView *_imgvPhoto;
    UIImageView *imageCoverView;
    ImageScrollView *photoScrollView;
    MGTwitterEngine *_engine;
    NSMutableArray *favArray;
    BOOL isSaved;
    BOOL favStatus;
    BOOL imageStatus;
    BOOL isGIF;
    BOOL closeStatus;
    UILabel *favLabel;
    UILabel *weiboText;
    UIButton *clearImageButton;
    UIButton *favImageButton;
    UIButton *saveImageButton;
    UIButton *commentButton;
    UIButton *forwardButton;
    BOOL notHideText;
    NSDictionary *pmsInfo;
}

@property(nonatomic) BOOL notHideText; // @synthesize notHideText;
@property(retain, nonatomic) NSDictionary *pmsInfo; // @synthesize pmsInfo;
@property(retain, nonatomic) NSDictionary *weiboInfo; // @synthesize weiboInfo;
- (void)statusBarRotated;
- (void)changeSaveImageButtonStatus:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)rotateToRight;
- (void)rotateToLeft;
- (void)barItemSaveClick;
- (void)onBarItemCancelFavTouched:(id)arg1;
- (void)onBarItemFavTouched:(id)arg1;
- (void)barItemForwardClick;
- (void)barItemCommentClick;
- (void)onCancelTouched:(id)arg1;
- (void)imageTouched;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)statusesReceived:(id)arg1 forRequest:(id)arg2;
- (void)gifLoadFailed:(id)arg1;
- (void)onImageLoadComplete;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)cancelFavAction;
- (void)addFavAction;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)checkFavState;
- (void)updateFavButton;
- (void)favLabelHidden;
- (void)favLabelAppear:(id)arg1;
- (void)viewDidLoad;
- (id)initColorBarItemWithAction:(SEL)arg1 title:(id)arg2 image:(id)arg3 highLightImage:(id)arg4;

@end
