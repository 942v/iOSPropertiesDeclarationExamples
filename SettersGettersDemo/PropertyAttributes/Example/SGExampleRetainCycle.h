//
//  SGExampleRetainCycle.h
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 9/2/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

@import Foundation;

@class SGExampleRetainCycleClassB;
@class SGExampleRetainCycleClassC;

@interface SGExampleRetainCycleClassA : NSObject

@property (nonatomic, strong) SGExampleRetainCycleClassB *classB;

@end

@interface SGExampleRetainCycleClassB : NSObject

@property (nonatomic, strong) SGExampleRetainCycleClassC *classC;

@end

@interface SGExampleRetainCycleClassC : NSObject

@property (nonatomic, strong) SGExampleRetainCycleClassA *classA;

@end
