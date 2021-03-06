//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutNode-Protocol.h>
#import <TSReading/EQKitLayoutSchemataFenced-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray;

@interface EQKitMathMLMFenced : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutNode, EQKitLayoutSchemataFenced>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (struct Schemata)layoutSchemata;
- (int)isOperatorPaddingRequired;
- (BOOL)isBaseFontNameUsed;
- (void)dealloc;
- (const set_25e6ba53 )mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode )arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

@end

