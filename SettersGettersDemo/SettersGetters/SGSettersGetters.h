//
//  SGSettersGetters.h
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 8/31/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

@import Foundation;

//////////////////////////////////////////////////////////
// An iVar is an instance variable, a piece of memory   //
// that holds some information.                         //
//////////////////////////////////////////////////////////
@interface SGiVarSettersGetters : NSObject

#pragma mark - Setters

- (void)setMyString:(NSString *)myString;

#pragma mark - Getters

- (NSString *)myString;

@end

//////////////////////////////////////////////////////////
// A property is a gloryfied iVar that adds support for //
// different attributes for memory management, thread   //
// information and accesibility of the instance.        //
// A property needs to be "linked" with an iVar, that's //
// why we need to declare setters and getters for the   //
// property and 'synthesize' them together              //
//////////////////////////////////////////////////////////
@interface SGManuallySynthetizedSettersGetters : NSObject

@property (strong) NSString *myString;

@end


//////////////////////////////////////////////////////////
// Apple Clang compiler added support for auto          //
// synthesized properties, so in modern ObjC (and ofc   //
// swift) we don't need to declare the iVar, setters,   //
// getters and @synthesize.                             //
//////////////////////////////////////////////////////////
@interface SGAutomaticallySynthetizedSettersGetters : NSObject

@property (strong) NSString *myString;

@end

// Add readonly
// what is a property
// Diffrent types of instances
