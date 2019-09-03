//
//  SGNullabilityObjC.h
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 9/2/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

@import Foundation;

//_Nonnull, _Nullable, or _Null_unspecified

//////////////////////////////////////////////////
// Nullability:                                 //
// Declares if the property should be expected  //
// to have a value or not. All variables need   //
// to state if they are nullable or not, by     //
// default clang adds nullable to all objects   //
// if not stated otherwise.                     //
//////////////////////////////////////////////////
//  _Nonnull            |   nonnull             //
//  _Nullable           |   nullable            //
//  _Null_unspecified   |   null_unspecified    //
//////////////////////////////////////////////////
//  null_resettable: is used to express the     //
//  nullability of properties (only) whose      //
//  setters allow nil (to “reset” the value to  //
//  some default) but whose getters never       //
//  produce nil (because they provide some      //
//  default instead) An example of              //
//  null_resettable given by Apple is tintColor //
//  in UIView, which could be any colours or    //
//  could be reset to system colour.            //
//////////////////////////////////////////////////
// That’s why when swift became a thing clang   //
// added support for new macros for ObjC:       //
//  NS_ASSUME_NONNULL_BEGIN                     //
//                                              //
//      As the name states everything between   //
//      these 2 is going to be marked as        //
//      nonnull until stated otherwise.         //
//                                              //
//  NS_ASSUME_NONNULL_END                       //
//                                              //
// This became particularly important for the   //
// bridge between ObjC and swift because in     //
// swift all variables need to state its        //
// nullability                                  //
//                                              //
// Silver bullet: think if your value can be    //
// optional or required.                        //
//                                              //
// Swift note: Yes sir! We have optionals (?)   //
// or non-optional (!)                          //
// nonnull keywords are imported by Swift as a  //
// non-optional                                 //
// nullable keywords are imported by Swift as   //
// an optional                                  //
//                                              //
// Links:                                       //
// https://medium.com/@thanyalukj/nullability-keywords-and-interoperability-between-objective-c-and-swift-220338af958b    //
//////////////////////////////////////////////////

NS_ASSUME_NONNULL_BEGIN

@interface SGNullabilityObjCMacros : NSObject

@property (nonatomic, strong, nullable) NSString *nullableString;
@property (nonatomic, strong) NSNumber *noNullableNumber;

- (instancetype)initWithNullableString:(NSString *_Nullable)nullableString noNullableNumber:(NSNumber *)noNullableNumber;

- (NSNumber *)getNoNullNumberFromString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END

@interface SGNullabilityObjCWithoutMacros : NSObject

@property (nonatomic, strong, null_resettable) NSString *nullableString;
@property (nonatomic, strong, nonnull) NSNumber *noNullableNumber;

- (instancetype _Nonnull)initWithNullableString:(NSString *_Nullable)nullableString noNullableNumber:(NSNumber *_Nonnull)noNullableNumber;

- (NSNumber *_Nullable)getNoNullNumberFromString:(NSString *_Nonnull)string;

@end

@interface SGNullabilityObjCWithoutLove : NSObject

@property (nonatomic, strong) NSString *nullableString;
@property (nonatomic, strong) NSNumber *noNullableNumber;

- (instancetype)initWithNullableString:(NSString *)nullableString noNullableNumber:(NSNumber *)noNullableNumber;

- (NSNumber *)getNoNullNumberFromString:(NSString *)string;

@end
