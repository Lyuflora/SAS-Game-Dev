using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SAS
{
    public abstract class State
    {

        protected TravelSystem _travelSystem;

        public State(TravelSystem travelSystem)
        {
            _travelSystem = travelSystem;
        }
        
        public virtual IEnumerator Start()
        {
            yield break;
        }
        
        public virtual IEnumerator LoadProgress()
        {
            yield break;
        }
        
        public virtual IEnumerator Dothings()
        {
            yield break;
        }

        public virtual IEnumerator SaveProgress()
        {
            yield break;
        }
    }

}
