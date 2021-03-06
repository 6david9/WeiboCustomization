/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIWebView.h"

#import "UIWebViewDelegate-Protocol.h"

@class DXAdAbstractControl, DXAdSize, NSDictionary, NSTimer, UIProgressView;

@interface DXAdHWebViewClient : UIWebView <UIWebViewDelegate>
{
    DXAdAbstractControl *adControl;
    NSDictionary *actionParams;
    DXAdSize *adSize;
    BOOL flag;
    BOOL isInterstitialAd;
    BOOL isLoadHtml;
    BOOL isWebApp;
    UIProgressView *progress;
    NSTimer *progressTime;
}

@property(retain) NSTimer *progressTime; // @synthesize progressTime;
@property(retain) UIProgressView *progress; // @synthesize progress;
@property BOOL isWebApp; // @synthesize isWebApp;
@property BOOL isLoadHtml; // @synthesize isLoadHtml;
@property BOOL isInterstitialAd; // @synthesize isInterstitialAd;
@property BOOL flag; // @synthesize flag;
@property(retain) DXAdSize *adSize; // @synthesize adSize;
@property(retain) NSDictionary *actionParams; // @synthesize actionParams;
@property DXAdAbstractControl *adControl; // @synthesize adControl;
- (void)setAdControlFromDefaultCenter:(id)arg1;
- (void)removeProgress;
- (void)updateProgress;
- (void)initProgress;
- (void)isShowScrollBar:(BOOL)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)finishAndRemove;
- (void)dealloc;
- (id)initWithCustom:(id)arg1 actionParms:(id)arg2 adSize:(id)arg3 rect:(struct CGRect)arg4 flag:(BOOL)arg5 isInterstitialAd:(BOOL)arg6;
- (id)initWithCustom:(id)arg1 actionParms:(id)arg2 adSize:(id)arg3 flag:(BOOL)arg4 isInterstitialAd:(BOOL)arg5;

@end

