/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIViewController, WBInterestsEngine;

@interface WBInterestsViewController : WBTableViewController
{
    NSMutableArray *interests;
    WBInterestsEngine *interestsEngine;
    NSMutableDictionary *locationDic;
    UIViewController *preloadViewController;
    NSString *preloadURLTitle;
    NSString *preloadURL;
}

@property(retain, nonatomic) NSString *preloadURL; // @synthesize preloadURL;
@property(retain, nonatomic) NSString *preloadURLTitle; // @synthesize preloadURLTitle;
@property(retain, nonatomic) UIViewController *preloadViewController; // @synthesize preloadViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)locationManagerDidFailToLocateNotification:(id)arg1;
- (void)locationManagerDidFinishLocatingNotification:(id)arg1;
- (void)startLocating;
- (void)goHomeButtonDidPressed:(id)arg1;
- (void)initGoHomeButton;
- (void)closeButtonPressed:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)preload;
- (void)reloadData;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

@end

