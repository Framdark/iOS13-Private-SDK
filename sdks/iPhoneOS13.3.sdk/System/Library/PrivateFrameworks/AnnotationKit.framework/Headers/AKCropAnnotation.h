//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@interface AKCropAnnotation : AKAnnotation <AKRectangularAnnotationProtocol>
{
    BOOL _hidden;
    BOOL _cropApplied;
    BOOL _showHandles;
    CGColor _color;
    CGRect _rectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property(nonatomic) CGColor color; // @synthesize color=_color;
@property BOOL showHandles; // @synthesize showHandles=_showHandles;
@property BOOL cropApplied; // @synthesize cropApplied=_cropApplied;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property CGRect rectangle; // @synthesize rectangle=_rectangle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;
- (void)dealloc;
- (id)init;

@end

