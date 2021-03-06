/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSDictionary, UIButton, UIImageView, UILabel, UITextField, UITextView;

@interface ProfileEditParticular : WBViewController <UITextViewDelegate, UIActionSheetDelegate>
{
    id <ProfileEditParticularDelegate> delegate;
    UITextField *txtName;
    UITextView *txtIntro;
    NSDictionary *userInfo;
    int type;
    UILabel *charsCount;
    UIButton *charButton;
    UIImageView *imageClear;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) id <ProfileEditParticularDelegate> delegate; // @synthesize delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setCharsCount;
- (void)charButtonPressed:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)isLegalLength;
- (void)saveButtonprofile:(id)arg1;
- (void)viewDidLoad;
- (void)keyboardWillShowNotification:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

