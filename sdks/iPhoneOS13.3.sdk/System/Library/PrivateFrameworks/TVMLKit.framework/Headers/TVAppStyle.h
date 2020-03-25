//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKColor, NSMutableDictionary, NSString;

@interface TVAppStyle : NSObject
{
    IKColor *_backgroundColor;
    NSString *_prototype;
    NSMutableDictionary *_valuesByStyle;
    CDStruct_81add385 _width;
    CDStruct_81add385 _minWidth;
    CDStruct_81add385 _maxWidth;
    CDStruct_81add385 _height;
    CDStruct_81add385 _minHeight;
    CDStruct_81add385 _maxHeight;
    CDStruct_81add385 _padding;
    CDStruct_81add385 _margin;
    CDStruct_81add385 _interitemSpacing;
    CDStruct_81add385 _fontSize;
    CDStruct_81add385 _borderRadius;
}

@property(readonly, nonatomic) NSMutableDictionary *valuesByStyle; // @synthesize valuesByStyle=_valuesByStyle;
@property(copy, nonatomic) NSString *prototype; // @synthesize prototype=_prototype;
@property(retain, nonatomic) IKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) CDStruct_81add385 borderRadius; // @synthesize borderRadius=_borderRadius;
@property(nonatomic) CDStruct_81add385 fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) CDStruct_81add385 interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) CDStruct_81add385 margin; // @synthesize margin=_margin;
@property(nonatomic) CDStruct_81add385 padding; // @synthesize padding=_padding;
@property(nonatomic) CDStruct_81add385 maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) CDStruct_81add385 minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) CDStruct_81add385 height; // @synthesize height=_height;
@property(nonatomic) CDStruct_81add385 maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) CDStruct_81add385 minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) CDStruct_81add385 width; // @synthesize width=_width;
// - (void).cxx_destruct;
- (void)_setValue:(id)arg1 forStyle:(id)arg2;
- (id)valueForStyle:(id)arg1;

@end

