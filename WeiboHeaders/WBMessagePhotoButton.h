/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class DDProgressView, UIImageView, UIView;

@interface WBMessagePhotoButton : UIButton
{
    BOOL uploading;
    BOOL isGif;
    UIView *maskView;
    UIImageView *gifImageView;
    DDProgressView *progressView;
}

@property(retain, nonatomic) DDProgressView *progressView; // @synthesize progressView;
@property(nonatomic, getter=isUploading) BOOL uploading; // @synthesize uploading;
@property(nonatomic) BOOL isGif; // @synthesize isGif;
- (void)dealloc;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

