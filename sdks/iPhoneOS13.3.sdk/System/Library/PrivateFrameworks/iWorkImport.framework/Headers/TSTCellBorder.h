//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTCellBorder : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying>
{
    TSDStroke *_topStroke;
    int _topStrokeOrder;
    TSDStroke *_rightStroke;
    int _rightStrokeOrder;
    TSDStroke *_bottomStroke;
    int _bottomStrokeOrder;
    TSDStroke *_leftStroke;
    int _leftStrokeOrder;
    BOOL _definedTopStroke;
    BOOL _definedTopStrokeOrder;
    BOOL _definedRightStroke;
    BOOL _definedRightStrokeOrder;
    BOOL _definedBottomStroke;
    BOOL _definedBottomStrokeOrder;
    BOOL _definedLeftStroke;
    BOOL _definedLeftStrokeOrder;
}

+ (id)cellDiffProperties;
+ (id)cellBorderForResettingAllStrokes;
+ (id)cellBorder;
@property(readonly, nonatomic) int rightStrokeOrder; // @synthesize rightStrokeOrder=_rightStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *rightStroke; // @synthesize rightStroke=_rightStroke;
@property(readonly, nonatomic) BOOL definedRightStroke; // @synthesize definedRightStroke=_definedRightStroke;
@property(readonly, nonatomic) int bottomStrokeOrder; // @synthesize bottomStrokeOrder=_bottomStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *bottomStroke; // @synthesize bottomStroke=_bottomStroke;
@property(readonly, nonatomic) BOOL definedBottomStroke; // @synthesize definedBottomStroke=_definedBottomStroke;
@property(readonly, nonatomic) int leftStrokeOrder; // @synthesize leftStrokeOrder=_leftStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *leftStroke; // @synthesize leftStroke=_leftStroke;
@property(readonly, nonatomic) BOOL definedLeftStroke; // @synthesize definedLeftStroke=_definedLeftStroke;
@property(readonly, nonatomic) int topStrokeOrder; // @synthesize topStrokeOrder=_topStrokeOrder;
@property(readonly, retain, nonatomic) TSDStroke *topStroke; // @synthesize topStroke=_topStroke;
@property(readonly, nonatomic) BOOL definedTopStroke; // @synthesize definedTopStroke=_definedTopStroke;
- (void)didInitFromSOS;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)saveToPropertyCommandMessage:(struct Message )arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message )arg1 unarchiver:(id)arg2;
- (void)saveToMessage:(struct CellBorderArchive )arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct CellBorderArchive )arg1 unarchiver:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) BOOL hasContent;
- (void)applyToCell:(id)arg1;
- (void)_clearRightStroke;
- (void)_clearBottomStroke;
- (void)_clearLeftStroke;
- (void)_clearTopStroke;
- (void)setRightStroke:(id)arg1 order:(int)arg2;
- (void)setBottomStroke:(id)arg1 order:(int)arg2;
- (void)setLeftStroke:(id)arg1 order:(int)arg2;
- (void)setTopStroke:(id)arg1 order:(int)arg2;
- (void)dealloc;

@end

