//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDLayout, TSDWrapPolygon, TSUPointerKeyDictionary, TSWPColumn;
@protocol TSWPLayoutTarget;

@interface SXTextTangierTextWrapContext : NSObject
{
    TSWPColumn *_column;
    TSDLayout<TSWPLayoutTarget> *_target;
    TSDWrapPolygon *_interiorWrapPolygon;
    TSUPointerKeyDictionary *_wrapPathInverseTransformInRootDictionary;
    CGAffineTransform _targetInverseTransformInRoot;
}

@property(retain, nonatomic) TSUPointerKeyDictionary *wrapPathInverseTransformInRootDictionary; // @synthesize wrapPathInverseTransformInRootDictionary=_wrapPathInverseTransformInRootDictionary;
@property(readonly, nonatomic) CGAffineTransform targetInverseTransformInRoot; // @synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot;
@property(readonly, nonatomic) TSDWrapPolygon *interiorWrapPolygon; // @synthesize interiorWrapPolygon=_interiorWrapPolygon;
@property(readonly, nonatomic) __weak TSDLayout<TSWPLayoutTarget> *target; // @synthesize target=_target;
@property(readonly, nonatomic) TSWPColumn *column; // @synthesize column=_column;
// - (void).cxx_destruct;
- (id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(CGAffineTransform)arg2;
- (id)initWithColumn:(id)arg1 targetLayout:(id)arg2;

@end

