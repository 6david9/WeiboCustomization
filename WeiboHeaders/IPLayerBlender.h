/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IPProcessor.h"

@class NSMutableArray;

@interface IPLayerBlender : IPProcessor
{
    NSMutableArray *rectArray;
    NSMutableArray *blendModeArray;
    NSMutableArray *alphaArray;
}

@property(retain, nonatomic) NSMutableArray *alphaArray; // @synthesize alphaArray;
@property(retain, nonatomic) NSMutableArray *blendModeArray; // @synthesize blendModeArray;
@property(retain, nonatomic) NSMutableArray *rectArray; // @synthesize rectArray;
- (void)processImages:(id)arg1;
- (BOOL)shouldProcess;
- (void)setRectArray:(id)arg1 blendModeArray:(id)arg2 alphaArray:(id)arg3;
- (void)setRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)dealloc;
- (id)initWithImages:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

