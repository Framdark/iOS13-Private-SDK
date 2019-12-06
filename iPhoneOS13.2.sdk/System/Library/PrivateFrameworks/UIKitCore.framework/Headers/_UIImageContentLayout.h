//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayout : NSObject
{
    struct {
        unsigned int contentsIsGenerator:1;
        unsigned int contentsIsCGImage:1;
        unsigned int rendersContentAtNaturalSize:1;
    } _flags;
    id _contents;
    UIColor *_contentsMultiplyColor;
    double _contentsScaleFactor;
    double _baselineOffsetFromTop;
    double _baselineOffsetFromBottom;
    UIEdgeInsets _contentInsets;
    CGAffineTransform _contentsTransform;
}

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(CGSize)arg3;
@property(readonly, nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
@property(readonly, nonatomic) double baselineOffsetFromTop; // @synthesize baselineOffsetFromTop=_baselineOffsetFromTop;
@property(readonly, nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) double contentsScaleFactor; // @synthesize contentsScaleFactor=_contentsScaleFactor;
@property(readonly, nonatomic) CGAffineTransform contentsTransform; // @synthesize contentsTransform=_contentsTransform;
// - (void).cxx_destruct;
- (id)description;
- (CGImageRef)CGImageContents;
- (BOOL)hasCGImageContents;
- (BOOL)rendersContentsAtNaturalSize;
- (BOOL)hasContents;
@property(readonly, nonatomic) UIColor *contentsMultiplyColor;
@property(readonly, nonatomic) id contents;
- (void)_materializeContentsIfNeeded;
- (void)_prepareContentOfSize:(CGSize)arg1 source:(id)arg2 target:(id)arg3;
- (id)initWithSource:(id)arg1 target:(id)arg2 withSize:(CGSize)arg3;

@end
