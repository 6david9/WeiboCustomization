/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UILabel.h"

@class UIView;

@interface WBAccessoryLabel : UILabel
{
    UIView *backgroundView;
    UIView *leftView;
    UIView *rightView;
    int leftViewVerticalAlignment;
    int rightViewVerticalAlignment;
    int textVerticalAlignment;
    struct CGPoint leftViewOffset;
    struct CGPoint rightViewOffset;
    struct CGPoint textOffset;
    struct UIEdgeInsets accessoryEdgeInsets;
    struct UIEdgeInsets textEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets textEdgeInsets; // @synthesize textEdgeInsets;
@property(nonatomic) struct UIEdgeInsets accessoryEdgeInsets; // @synthesize accessoryEdgeInsets;
@property(nonatomic) struct CGPoint textOffset; // @synthesize textOffset;
@property(nonatomic) struct CGPoint rightViewOffset; // @synthesize rightViewOffset;
@property(nonatomic) struct CGPoint leftViewOffset; // @synthesize leftViewOffset;
@property(nonatomic) int textVerticalAlignment; // @synthesize textVerticalAlignment;
@property(nonatomic) int rightViewVerticalAlignment; // @synthesize rightViewVerticalAlignment;
@property(nonatomic) int leftViewVerticalAlignment; // @synthesize leftViewVerticalAlignment;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(int)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

