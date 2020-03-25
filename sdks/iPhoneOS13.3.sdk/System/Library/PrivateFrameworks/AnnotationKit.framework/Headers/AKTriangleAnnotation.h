//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@class UIBezierPath;

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>
{
    BOOL _verticallyFlipped;
    BOOL _horizontallyFlipped;
    UIBezierPath *_path;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
@property BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property(retain) UIBezierPath *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (CGRect)hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

@end
