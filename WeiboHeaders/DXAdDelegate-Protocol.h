/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DXAdDelegate <NSObject>

@optional
- (void)onAdFinished:(id)arg1;
- (void)onHideBanner:(id)arg1;
- (void)onLeaveApplication:(id)arg1;
- (void)onDismissScreen:(id)arg1;
- (void)onPresentScreen:(id)arg1;
- (void)onFailedToReceiveAd:(id)arg1 AdRequest:(id)arg2 ErrorCode:(int)arg3;
- (void)onReceiveAd:(id)arg1;
@end

