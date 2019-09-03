//
//  SGPropertyAttributes.h
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 9/1/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

@import UIKit;

//////////////////////////////////////////////////
// Cheat table                                  //
//////////////////////////////////////////////////
// Atomicity:                                   //
// atomic (default)     |   nonatomic           //
// -------------------------------------------- //
// Memory Management:                           //
// strong (default)     |   weak                //
// copy                 |   assign              //
// retain               |   unsafe_unretained   //
// -------------------------------------------- //
// Writability:                                 //
// readwrite (default)  |   readonly            //
// -------------------------------------------- //
// Custom Setters and getters for auto          //
// synthesize:                                  //
// getter=              |   setter=             //
//////////////////////////////////////////////////

@interface SGPropertyAttributes : NSObject

//////////////////////////////////////////////////
// Atomicity:                                   //
// It declares how the data is written or read. //
// If you define the property as atomic it's    //
// guaranteed that a valid value will be        //
// returned, valid doesn’t equal to correct. If //
// 2 threads set and get at the same time then  //
// one of the 2 values will be returned, the    //
// initial one or the one after the change.     //
// Atomic is less optimal because it locks and  //
// unlocks the setters and getters of the       //
// property.                                    //
// If you define the property as nonatomic      //
// there’s no guarantee that a valid value will //
// be returned or any value. It could be        //
// returned the correct value, a partially      //
// written value or even that makes no sense.   //
// Then why use nonatomic you say? Because it’s //
// faster and you should handle thread safety   //
// outside the property it self.                //
//                                              //
// Silver bullet: always use nonatomic, it’s    //
// the apple way.                               //
//                                              //
// Swift note: all swift declared properties are//
// nonatomic, only if you define a property as  //
// atomic in ObjC it would conserve that status //
// in swift.                                    //
//                                              //
// Links:                                       //
// https://medium.com/@YogevSitton/atomic-vs-non-atomic-properties-crash-course-d11c23f4366c    //
//////////////////////////////////////////////////
@property (atomic) id atomicVariable;
@property (nonatomic) id nonAtomicVariable;

//////////////////////////////////////////////////
// Memory Management:                           //
// It declares the class's ownership of the     //
// property, it can add 1 (strong) to the       //
// reference count or add nothing (weak).       //
//                                              //
// All objects will be retained in memory by ARC//
// until the reference count reaches 0. This can//
// be a bless or a nightmare if not stated      //
// properly: retain cycles = dead memory.       //
//                                              //
// Silver bullet: Sorry there's not, just       //
// evaluate correctly your implementation and   //
// question yourself if you really need to      //
// retain that property strongly in that        //
// instance                                     //
//                                              //
// Swift note: you can declare a property as    //
// weak or unowned, both do the same thing just //
// with one minor (or mayor?) difference:       //
// unowned expects a value always, can’t be null//
//                                              //
// Links:                                       //
// https://cocoacasts.com/what-is-the-difference-between-strong-weak-and-unowned-references //
//////////////////////////////////////////////////
@property (strong) id strongVariable;
@property (weak) id weakVariable; 

//////////////////////////////////////////////////
// Memory Management:                           //
// It's like weak but pre-ARC era, same behavior//
// for primitive data types. (BOOL, NSInteger,  //
// CGFloat, etc)                                //
//                                              //
// Silver bullet: If it's not a class object    //
// then use assign. Better, if you can declate  //
// it without * and it's not an 'id' then use   //
// assign                                       //
//                                              //
// Swift note: don't exist (as far as I know)   //
//                                              //
// Links:                                       //
// No link sorry.                               //
//////////////////////////////////////////////////
@property (assign) BOOL primitiveVariable;

//////////////////////////////////////////////////
// Memory Management:                           //
// It's like strong but it doesn’t increase in 1//
// the retain count, instead it copies the value//
// of the object and takes ownership of that new//
// object.                                      //
//                                              //
// This is what copy does:
// - (void)setMyCopiedProperty:(MyClass *)newValue {
//     _myCopiedProperty = [newValue copy];
// }
// The object must comply to the NSCopying      //
// protocol                                     //
//                                              //
// Silver bullet: Say I have                    //
// NSString *a = @"1234"; If I assign a to a    //
// copy property b then what the setter code    //
// does is effectively b = [a copy] so now B is //
// a new string. If I change a, nothing will    //
// happen to b, since b is a copy. Similarly if //
// I change b then nothing happens to a.        //
//                                              //
// Swift note: don't exist (as far as I know)   //
//                                              //
// Links:                                       //
// No link sorry.                               //
//////////////////////////////////////////////////
@property (copy) id copiedVariable;


//////////////////////////////////////////////////
// Memory Management:                           //
// Pre-ARC era you shouldn't use them in any    //
// case. Retain = strong,                       //
// unsafe_unretainedVariable ~= weak, minor     //
// difference tho it didn’t release to pointer  //
// automatically.                               //
//                                              //
// Silver bullet: Yeah, don't use them
//                                              //
// Swift note: Really? what do you think?       //
//                                              //
// Links:                                       //
// No link sorry. Maybe you can check in google //
// of 2011                                      //
//////////////////////////////////////////////////
@property (retain) id retainVariable;
@property (unsafe_unretained) id unsafe_unretainedVariable;

//////////////////////////////////////////////////
// Writability:                                 //
// Declares if setters and getters should be    //
// automatically added.                         //
// Readwrite is the default value, it tells the //
// compiler to create the setters and getters.  //
// Readonly tells the compiler to only create   //
// the getters, leaving the assignation of the  //
// value directly to the iVar.                  //
//                                              //
// Silver bullet: I use it a lot to declare     //
// unmutable properties to protect them against //
// race conditions or simply stupidity of       //
// Guillermo of the future.                     //
//                                              //
// Swift note: Yep, public, private or fileprivate
// attributes.                                  //
//                                              //
// Links:                                       //
// No link sorry.                               //
//////////////////////////////////////////////////
@property (readwrite) id readwriteVariable;
@property (readonly) id readonlyVariable;


//////////////////////////////////////////////////
// Custom Setters and getters for auto          //
// synthesize:                                  //
// It lets you declare custom methods for the   //
// getter and setter of the property.           //
//                                              //
// Silver bullet: I'm not going to lie I haven't//
// used the setter=, but I've seen pretty crazy //
// stuff to auto assign properties at parsing a //
// json, crazy stuff, works like magic. I can't //
// help you more than that. If you know a good  //
// use for it then hit me up!                   //
//                                              //
// Swift note: Yep, public, private or          //
// fileprivate attributes.                      //
//                                              //
// Links:                                       //
// No link sorry.                               //
//////////////////////////////////////////////////
@property (getter=myCustomGetterVariable) id customGetterVariable;
@property (setter=myCustomSetterVariable:) id customSetterVariable;

#pragma mark - Examples

//////////////////////////////////////////////////
// At least 1 type of attribute per group need  //
// to be present in a declaration of a property,//
// if you don't declare it then clang does it   //
// for you adding the default values.           //
//////////////////////////////////////////////////
@property NSArray *myArray;
@property (nonatomic, copy, readonly) NSString *myString;
@property (nonatomic, copy, readonly) NSNumber *myNumber;
@property (nonatomic, assign, readonly, getter=isFake) BOOL fake;
@property (nonatomic, weak) IBOutlet UIButton *myButton;

@end
