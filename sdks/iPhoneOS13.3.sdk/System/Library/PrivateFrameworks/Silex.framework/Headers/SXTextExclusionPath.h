//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXTextExclusionPathWrapper, UIBezierPath;
@protocol TSDWrappable;

@interface SXTextExclusionPath : NSObject
{
    BOOL _fullBleed;
    int _type;
    int _lineVerticalAlignment;
    double _padding;
    double _verticalAlignmentFactor;
    NSString *_componentIdentifier;
    id /* CDUnknownBlockType */ _startBlock;
    id /* CDUnknownBlockType */ _minYBlock;
    id /* CDUnknownBlockType */ _completionBlock;
    SXTextExclusionPathWrapper *_wrapper;
    CGPoint _actualPosition;
    CGPoint _position;
    CGPoint _anchorPoint;
    _NSRange _range;
    UIEdgeInsets _insets;
    CGRect _exclusionRect;
}

@property(nonatomic) CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property(readonly, nonatomic) SXTextExclusionPathWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ minYBlock; // @synthesize minYBlock=_minYBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ startBlock; // @synthesize startBlock=_startBlock;
@property(retain, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(nonatomic) BOOL fullBleed; // @synthesize fullBleed=_fullBleed;
@property(readonly, nonatomic) UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) int lineVerticalAlignment; // @synthesize lineVerticalAlignment=_lineVerticalAlignment;
@property(nonatomic) double verticalAlignmentFactor; // @synthesize verticalAlignmentFactor=_verticalAlignmentFactor;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) CGPoint actualPosition; // @synthesize actualPosition=_actualPosition;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIBezierPath *path;
- (void)callCompletionBlock;
- (void)adjustYPositionWithCurrentPosition:(CGPoint)arg1;
- (void)callStartBlock;
@property(readonly, nonatomic) id <TSDWrappable> wrappable;
- (id)description;
- (id)initWithTextRange:(_NSRange)arg1 position:(CGPoint)arg2 rect:(CGRect)arg3 withInsets:(UIEdgeInsets)arg4;

@end

