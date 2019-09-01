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

@property (atomic) id atomicVariable;
@property (nonatomic) id nonAtomicVariable;

@property (strong) id strongVariable;
@property (weak) id weakVariable;

@property (readwrite) id readwriteVariable;
@property (readonly) id readonlyVariable;

@property (getter=myCustomGetterVariable) id customGetterVariable;
@property (setter=myCustomSetterVariable:) id customSetterVariable;

@property (copy) id copiedVariable;
@property (assign) BOOL primitiveVariable;

@property (retain) id retainVariable;
@property (unsafe_unretained) id unsafe_unretainedVariable;

#pragma mark - Examples

//////////////////////////////////////////////////
// At least 1 type of attribute per group need  //
// to be present in a declaration of a property,//
// if you don't declare it then clang does it   //
// for you adding the default values.           //
//////////////////////////////////////////////////
@property (nonatomic, copy, readonly) NSString *myString;
@property (nonatomic, copy, readonly) NSNumber *myNumber;
@property (nonatomic, assign, readonly, getter=isFake) BOOL fake;
@property (nonatomic, weak) IBOutlet UIButton *myButton;

@end
