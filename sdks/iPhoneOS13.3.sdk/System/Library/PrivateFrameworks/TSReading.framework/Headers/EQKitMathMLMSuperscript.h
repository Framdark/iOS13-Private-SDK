//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLBinaryNode.h>

#import <TSReading/EQKitLayoutSchemataSubsuperscript-Protocol.h>

@interface EQKitMathMLMSuperscript : EQKitMathMLBinaryNode <EQKitLayoutSchemataSubsuperscript>
{
}

- (id)schemataSuperscript;
- (id)schemataSubscript;
- (id)schemataKernel;
- (id)operatorCore;
- (BOOL)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;

@end

