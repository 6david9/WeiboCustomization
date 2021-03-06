/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIActionSheet.h"

@class MGTwitterEngine, UIView;

@interface ActionSheetHint : UIActionSheet
{
    MGTwitterEngine *twitterEngine;
    id <ActionSheetHintDelegate> canDelegate;
    int userInfo;
    BOOL _isInBackground;
    UIView *_parentView;
}

+ (id)activeActionSheet;
+ (id)hintWithTitle:(id)arg1 delegate:(id)arg2 shouldShowCancel:(BOOL)arg3 engine:(id)arg4 parentView:(id)arg5;
@property(nonatomic) id <ActionSheetHintDelegate> canDelegate; // @synthesize canDelegate;
@property(retain, nonatomic) MGTwitterEngine *twitterEngine; // @synthesize twitterEngine;
- (void)dealloc;
- (void)dismissWithHint:(id)arg1 afterDelay:(double)arg2;
- (void)dismissWithHint:(id)arg1 afterDelay:(double)arg2 userInfo:(int)arg3;
- (void)_dismiss;
- (void)onCancelSheet:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)bringToFront;
- (void)sendToBackground;
- (void)_showInView:(id)arg1;

@end

