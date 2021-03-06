/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIColor;

@interface DDProgressView : UIView
{
    float progress;
    UIColor *innerColor;
    UIColor *outerColor;
}

@property(nonatomic) float progress; // @synthesize progress;
@property(retain, nonatomic) UIColor *outerColor; // @synthesize outerColor;
@property(retain, nonatomic) UIColor *innerColor; // @synthesize innerColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

