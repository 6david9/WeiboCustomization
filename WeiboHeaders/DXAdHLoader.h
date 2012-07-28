/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DXAdAbstractControl, DXAdHLoadAdTask, DXAdHWebViewClient, NSString;

@interface DXAdHLoader : NSObject
{
    NSString *url;
    NSString *content;
    DXAdAbstractControl *control;
    NSString *adUrl;
    int errcode;
    DXAdHWebViewClient *webView;
    BOOL finishedLoadingHtml;
    BOOL isCancelRequest;
    DXAdHLoadAdTask *loadAdTask;
    long long lastCleanOldrecordTime;
}

@property(retain) DXAdHLoadAdTask *loadAdTask; // @synthesize loadAdTask;
@property long long lastCleanOldrecordTime; // @synthesize lastCleanOldrecordTime;
@property(readonly) BOOL isCancelRequest; // @synthesize isCancelRequest;
@property BOOL finishedLoadingHtml; // @synthesize finishedLoadingHtml;
@property DXAdHWebViewClient *webView; // @synthesize webView;
@property int errcode; // @synthesize errcode;
@property(retain) NSString *adUrl; // @synthesize adUrl;
@property DXAdAbstractControl *control; // @synthesize control;
@property(retain) NSString *content; // @synthesize content;
@property(retain) NSString *url; // @synthesize url;
- (void)setAdWebViewFromDefaultCenter:(id)arg1;
- (void)setAdControlFromDefaultCenter:(id)arg1;
- (void)notify;
- (void)wait:(float)arg1;
- (void)wait;
- (void)setFinishLoadingHtmlWithNotify:(BOOL)arg1;
- (void)setContentWithNotify:(id)arg1;
- (void)setAdUrlWithNotify:(id)arg1;
- (void)setErrorCodeWithNotify:(int)arg1;
- (void)setLoadAdFinishWithNotify;
- (void)setContentAndUrlWithNotify:(id)arg1 url:(id)arg2;
- (id)buildRequestMap:(id)arg1;
- (id)buildHtml:(id)arg1;
- (void)cancelRequet;
- (void)threadNotify;
- (void)threadFillWebView;
- (void)threadLoadAdTask:(id)arg1;
- (void)threadAnalyzeUrl:(id)arg1;
- (int)threadExecuteAdRequestWithNoCache:(id)arg1;
- (void)loadWebViewOnMainThread;
- (void)threadExecuteAdRequestWithCache:(id)arg1;
- (id)loadAdFromDB:(id)arg1;
- (void)executeAdRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end
