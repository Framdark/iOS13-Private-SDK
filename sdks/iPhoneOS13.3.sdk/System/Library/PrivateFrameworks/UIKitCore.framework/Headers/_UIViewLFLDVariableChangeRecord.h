//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSISVariable, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord
{
    NSISVariable *_variable;
    double _value;
    UIView *_variableDelegate;
}

@property(readonly, nonatomic) UIView *variableDelegate; // @synthesize variableDelegate=_variableDelegate;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) NSISVariable *variable; // @synthesize variable=_variable;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2;

@end

